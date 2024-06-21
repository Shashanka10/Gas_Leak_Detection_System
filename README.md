<h2>Mini Project of Embedded System</h2>
<h3>Done using Proteus</h3>
<h1>Gas Leak Detection System</h1>
        <p>This project is a Gas Leak Detection System designed to detect the presence of gas leaks in the environment using an MQ-2 gas sensor. Upon detection of a gas leak, the system triggers an audible alarm, displays a warning message on an LCD screen, and activates an LED indicator to signal the detection. This system aims to enhance safety by providing an early warning to prevent potential accidents.</p>
<h2>Components Used</h2>
    <ul>
            <li><span class="component">LM044L (LCD Display):</span> Monochrome LCD display module with a 4-line by 20-character display, used for displaying text readouts.</li>
            <li><span class="component">Buzzer:</span> Audio signaling device that emits sound when activated, used for alerting and notifications.</li>
            <li><span class="component">Arduino Simulino Uno:</span> Simulated version of the Arduino Uno microcontroller used for virtual prototyping and testing.</li>
            <li><span class="component">Relay:</span> Electromechanical switch used to control a high-power circuit with a low-power signal.</li>
            <li><span class="component">LED:</span> Light Emitting Diode used for visual indication.</li>
            <li><span class="component">Logic State:</span> Refers to the binary condition of a digital signal (high or low voltage level).</li>
            <li><span class="component">MQ-2 Gas Sensor:</span> Versatile sensor used for detecting a range of gases including methane, propane, hydrogen, alcohol, smoke, and carbon monoxide.</li>
    </ul>
<h2>Simulation Details</h2>
<h3>Working of the System</h3>
        <ul>
            <li><span class="component">Initialization:</span> Upon powering on, the Arduino initializes all components. The LCD displays a welcome message indicating that the gas leak detection system is active.                </li>
            <li><span class="component">Gas Detection:</span> The MQ-2 gas sensor detects the presence of gas. When the logic state is high (gas detected), the sensor's analog output is read by the Arduino.</li>
            <li><span class="component">Alarm Activation:</span>
                <ul>
                    <li><span class="component">Audible Alarm:</span> The relay is activated, powering the buzzer which produces a loud sound.</li>
                    <li><span class="component">Visual Indicator:</span> The LED turns on.</li>
                    <li><span class="component">LCD Message:</span> The LCD displays a warning message indicating a gas leak.</li>
                </ul>
            </li>
        </ul>
