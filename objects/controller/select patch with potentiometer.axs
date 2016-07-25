<patch-1.0 appVersion="1.0.10">
   <comment type="patch/comment" x="14" y="28" text="potentiometer position to patch index"/>
   <obj type="patch/bankindex" uuid="943bd281-10a5-4994-9876-11a3b1fbde8a" name="bankindex_1" x="154" y="56">
      <params/>
      <attribs/>
   </obj>
   <obj type="gpio/in/analog" uuid="1c0c845ed2d7e06ae5f377ba13d9d09f4747ac87" name="analog_1" x="14" y="112">
      <params/>
      <attribs>
         <combo attributeName="channel" selection="PA7 (ADC1_IN7)"/>
      </attribs>
   </obj>
   <obj type="math/*c" uuid="7d5ef61c3bcd571ee6bbd8437ef3612125dfb225" name="*c_1" x="154" y="112">
      <params>
         <frac32.u.map name="amp" value="16.0"/>
      </params>
      <attribs/>
   </obj>
   <obj type="math/-" uuid="3280bb759e9fc189e134300e48dda7e903c9a110" name="-_1" x="266" y="112">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/abs" uuid="4ae01ff03753539d9028888689654235fa199936" name="abs_1" x="350" y="112">
      <params/>
      <attribs/>
   </obj>
   <comment type="patch/comment" x="266" y="182" text="&lt;- number of patches selectable by potentiometer"/>
   <obj type="patch/load i" uuid="b79124f5b7d1e8b39e187677ddab6260ce8c60a3" name="load_1" x="364" y="210">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/round" uuid="d0382003e049112e1746390d691d052ae1294db" name="round_1" x="112" y="224">
      <params/>
      <attribs/>
   </obj>
   <obj type="conv/to i" uuid="305966430ee86b5c3b8e18cde0c721657c558a87" name="to_1" x="196" y="224">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/&gt;c" uuid="99f2934d97d62b715a829979ef6c8abef35dcdb2" name="&gt;c_1" x="280" y="224">
      <params>
         <frac32.u.map name="c" value="0.5999999046325684"/>
      </params>
      <attribs/>
   </obj>
   <nets>
      <net>
         <source obj="analog_1" outlet="out"/>
         <dest obj="*c_1" inlet="in"/>
      </net>
      <net>
         <source obj="to_1" outlet="o"/>
         <dest obj="load_1" inlet="i"/>
      </net>
      <net>
         <source obj="bankindex_1" outlet="index"/>
         <dest obj="-_1" inlet="in2"/>
      </net>
      <net>
         <source obj="-_1" outlet="out"/>
         <dest obj="abs_1" inlet="in"/>
      </net>
      <net>
         <source obj="*c_1" outlet="out"/>
         <dest obj="-_1" inlet="in1"/>
         <dest obj="round_1" inlet="in"/>
      </net>
      <net>
         <source obj="round_1" outlet="out"/>
         <dest obj="to_1" inlet="i"/>
      </net>
      <net>
         <source obj="abs_1" outlet="out"/>
         <dest obj="&gt;c_1" inlet="in"/>
      </net>
      <net>
         <source obj="&gt;c_1" outlet="out"/>
         <dest obj="load_1" inlet="trig"/>
      </net>
   </nets>
   <settings>
      <subpatchmode>no</subpatchmode>
      <MidiChannel>1</MidiChannel>
      <NPresets>0</NPresets>
      <NPresetEntries>0</NPresetEntries>
      <NModulationSources>0</NModulationSources>
      <NModulationTargetsPerSource>0</NModulationTargetsPerSource>
      <Author>Johannes Taelman</Author>
      <License>BSD</License>
      <Attributions></Attributions>
   </settings>
   <notes><![CDATA[]]></notes>
   <windowPos>
      <x>307</x>
      <y>586</y>
      <width>624</width>
      <height>454</height>
   </windowPos>
</patch-1.0>