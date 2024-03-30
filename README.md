# Blink Hard Mode

Welcome, Welcome and another welcome to the repo that contanis some of the world's hardest blink examples...

## Level 0

If you coded for arduino before, you should know this, so I'll just skip it

## level 1

This one is not so much different from the previous one, it just intrudoce to think a bit more professional.

If you have sume redunduncy in your code, this means something is wrong, you can compress all of it in much less lines probably, although somtimes this add way more complexity to the code, but it makes you more professional

So, what I did here is instead of turning the LED on then turn it back off, I just tell him to toggle it, set it to the opposite of whatever there, although this doesn't add much effeciency in our code, but at larger scale, this should make a difference.

Also, microcontrollers specificly, don't have much space and this force you to think this way in more complex projects, because you don't want the code to have so much space, then you care about the least bit of optimization

## level 2

What I did here is trying to get you out of arduino IDE zone and deal a little with your assistant (command line), being familiar with the command line is an essential skill, it saves you time in your projects and also everthing is from the command line, git, docker, aws, amplify and so on... those some of the tools I need from the command line, yours might be different but we all drop to the same spot, we use the command line in a way or another

so, let's have a step back before leaving arduino IDE, let's understand what arduino IDE abstracted and headache it took away from us...

First: liberaries, c and c++ doesn't have pinMode or digitalWrite, so where did they came from? the answer is arduino library, whenever you verify or upload your code through arduino IDE, it automaticly include those files. In order to do that manually, modify there to wherever they exist on your machine

> WARNING: don't search for the location on google, you won't find it, do this instead:
>
> - open the blink example ( or any other project ) in arduino IDE
> - specify the port and type of arduino you have (It doesn't work for me without specifying simply because specifiying the device also modify the included files and define which ones to include and I think this is why it doesn't work without specifing)
> - hover over some arduino special code like pinMode or LED_BUILTIN or digitalWrite
> - hold ctrl and click this function or constant whatever and this should lead you to where it exist
> - look at the name of the file and then include it in the project
> - hover over the name of included file and here comes the path
> - Finaly: appretiate this process because trust me it's the easiest one

    #include <cores/arduino/Arduino.h>
    #include <variants/standard/pins_arduino.h>

For me, I added the whole path for arduino liberaries to my includePath (which was: "C:\Users\elbehairy\AppData\Local\Arduino15\packages\arduino\hardware\avr\1.8.6") and that's why it looks wierd

Second: let's talk about how to compile and upload the code... the first thing you should do is installing avr toolchain or find the one installed with arduino
then search it for a bin folder containing avr-gcc, avdude which are the compiler and the program that upload your code to arduino, if you enabled verbose whily compiling and uploading code from arduino IDE, you should notice that what arduino is doing is running them for you. [see this video](https://youtu.be/Q2DakPocvfs?si=WCiogsapUcC6b_xs) and [this one also](https://youtu.be/7lcY5tcP_ow?si=8sCGSXLmfJGIHLni) for better understanding

You know, you just watch the whole playlist, I'm too lazy for this. goodbye...

## level 3

Just look at the first two videos of this [playlist](https://youtube.com/playlist?list=PLNyfXcjhOAwOF-7S-ZoW2wuQ6Y-4hfjMR&si=SCMA391MY6rPZ4Kl)

## level 4

look at this [video](https://youtu.be/ZLyesUiXde4?si=mvxxmQKIpUInJQNY) to learn more about optimization and bitwise operators, notice the added -Os as an argument to avr-gcc in cmd files

## level 5

Simply, this one introduces you to interrupts, [see this video](https://www.youtube.com/watch?v=5HgQkHzQc3o&t=460s&ab_channel=LowLevelLearning)
