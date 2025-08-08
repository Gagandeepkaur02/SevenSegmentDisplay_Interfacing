# SevenSegmentDisplay_Interfacing
Arduino project to display numbers 0–9 on a single-digit common anode 7-segment display using the SevSeg library. Includes smooth counting, decimal point toggle, and non-blocking code for flicker-free display.
# Common Anode 7-Segment Counter (Arduino + SevSeg)

This Arduino project uses a **common anode** 7-segment display to count from **0 to 9** with a 1-second interval, toggling the decimal point every alternate number.  
The project uses the SevSeg library for easy control of 7-segment displays.



## Wiring Diagram
| Segment | Arduino Pin |
|---------|-------------|
| a       | 6           |
| b       | 5           |
| c       | 2           |
| d       | 3           |
| e       | 4           |
| f       | 7           |
| g       | 8           |
| dp      | 9           |
| Common Anode pins | +5V |

**Tip:** _Use one resistor per segment for even brightness._



##  Features
- Works with **common anode** single-digit 7-segment displays  
- Counts **0 → 9** automatically  
- Toggles decimal point for visual effect  
- Flicker-free thanks to continuous `refreshDisplay()` calls  
- Adjustable brightness  

---

## Required Library
Install the **SevSeg** library:
1. Open Arduino IDE → **Sketch → Include Library → Manage Libraries**
2. Search **SevSeg**
3. Install

