<!DOCTYPE html>
<html lang="zh">
<head>
    <meta charset="UTF-8">
    <title>填充纹理</title>
</head>
<body>
<div id = "canvas-warp">
    <canvas id = " canvas" style = "border: 1px solid #aaaaaa; display: block;margin: 50px auto;">
    你的浏览器居然不支持Canvas？！赶快换一个吧！！
        </canvas>
</div>

<script>
    window.onload = function()
    {
        var canvas = document.getElementById("canvas");
        canvas.width = 800;
        canvas.height = 600;
        var context = canvas.getContext("2d");

        var img = new Image();
        img.src = "Laoshu img.jpg";
        img.onload = function()
        {
            var pattern = context.createPattern(img,"repeat");
            context.fillStyle = pattern;
            context.fillRect(0,0,800,600);
        }

    }
</script>
</body>
</html>
