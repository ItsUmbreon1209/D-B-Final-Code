This is the repository for our final code. 

The basic premise of this code is that with the camera turned on, we can connect to the network.

If the camera detects a face, the built in software will send a "high" signal to the USB port that it's connected to (Specifically COM5).

If the camera does not detect a face, the built in software will remain passive and send nothing.

The arduino UNO will be continuously rotating, & "listening" to COM5.

If the UNO detects a signal, the camera will cease to rotate, & the piezo will sound.

If the UNO does not detect a signal, it will only rotate.
