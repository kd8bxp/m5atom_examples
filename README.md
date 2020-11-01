# M5Atom Examples

requirements:  
FastLED library http://fastled.io/  
FastLED_GFX library https://github.com/Jorgen-VikingGod/FastLED-GFX  

Most of these sketches are examples provided by the various libraries, they have been  
changed slightly (timings, pins, etc).  

AtomScrollingText and atom_rainbow_waves - by Lukas Maximus89 https://github.com/lukasmaximus89/M5Atom-Resources who provides even more M5Atom resources.  
Demo video from Lukas https://youtu.be/2f4biAfvC_M  
AtomScrollingText requires Adafruit Neopixel library, and Adafruit GFX library.  
To display a 5x5 font, the glcdfont.c file needs to be replaced with the one included in this repository. Big thanks to the user on this forum https://forums.adafruit.com/viewtopic.php?f=47&t=58581 for the custom 5x5 font  
Unfortuntally this font is only in uppercase.  

AtomScrollingText2 is a slightly modified version of the sketch using the "TomThumb" font, which is a 3x5 font. And doesn't need the custom font. It also has both upper and lower case.  

fastled_text_scroll is an example of using the FastLED_GFX library for scrolling text. this is based on a scrolling text example for a 8x8 matrix.  
Like above you need to replace the glcdfont.c file with the one included here.  
Unfortuntally I couldn't get the "TomThumb" font to work with the FastLED GFX library.  
FastLED appears to work better on this device, but the Adafruit Neopixel & GFX libraries provide better fonts support.  

## Libraries

Because the Arduino IDE has been getting pretty bad handling libraries, I've included the libraries used in the src directory of the sketch. These libraries may have been slightly modified to work from the sketch directory, and do not include the examples.  
 NOTE: Adafruit Libraries could not be used from the sketch directory. Sketches Compile from the libraries directory.  

## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request

## Support Me

If you find this or any of my projects useful or enjoyable please support me.  
Anything I do get goes to buy more parts and make more/better projects.  
https://www.patreon.com/kd8bxp  
https://ko-fi.com/lfmiller  
https://www.paypal.me/KD8BXP  

## Other Projects

https://www.youtube.com/channel/UCP6Vh4hfyJF288MTaRAF36w  
https://kd8bxp.blogspot.com/  


## Credits

Copyright (c) 2020 LeRoy Miller

## License

This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses>
