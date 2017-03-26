var MyPlugin = {
    Hello: function(data)
    {
        window.alert("Hello, world!");
        window.alert(data.patientName);
        var api_url = "http://localhost:5000/api/add-patient";
        var patient_data = {
            firstname: "Tom",
            password: "Ford"
        };
        $.ajax(api_url, {
            url: api_url,
            type: "POST",
            data: JSON.stringify(patient_data),
            contentType: "application/json",
            success: function(status) {
                window.alert("successful connection to app");
            },
            error: function(status) {
                window.alert("error connecting to app");
            }
        });
    },
    HelloString: function(str)
    {
        window.alert(Pointer_stringify(str));
    },
    PrintFloatArray: function(array, size)
    {
        for(var i=0;i<size;i++)
            console.log(HEAPF32[(array>>2)+size]);
    },
    AddNumbers: function(x,y)
    {
        return x + y;
    },
    StringReturnValueFunction: function()
    {
        var returnStr = "bla";
        var buffer = _malloc(lengthBytesUTF8(returnStr) + 1);
        writeStringToMemory(returnStr, buffer);
        return buffer;
    },
    BindWebGLTexture: function(texture)
    {
        GLctx.bindTexture(GLctx.TEXTURE_2D, GL.textures[texture]);
    }
};

mergeInto(LibraryManager.library, MyPlugin);