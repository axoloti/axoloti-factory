<patch-1.0 appVersion="1.0.9">
   <obj type="ctrl/dial p" sha="1f21216639bb798a4ea7902940999a5bcfd0de90" name="level" x="182" y="14">
      <params>
         <frac32.u.map name="value" onParent="true" value="4.0"/>
      </params>
      <attribs/>
   </obj>
   <obj type="patch/inlet a" sha="2944bdbaeb2a8a42d5a97163275d052f75668a86" name="in" x="42" y="56">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/div 2" uuid="ad1e413d83e5edce017e3e9a4f30d86035cf637" name="div_1" x="112" y="56">
      <params/>
      <attribs/>
   </obj>
   <obj type="conv/nointerp" sha="77d868d4547e0e29a1aa7711f764a6d3957177f9" name="nointerp_1" x="252" y="56">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/+" uuid="faedbea4612d9bd3644d6d3bf31946d848a70e19" name="+c_1" x="112" y="98">
      <params/>
      <attribs/>
   </obj>
   <obj type="dist/rectifier" sha="6a81663bcc6a29c922883f499193baff3d14c5d" name="rectifier_1" x="182" y="98">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/muls 2" uuid="c3083089dc169cd87133000659a02789dec5a151" name="muls_1" x="252" y="98">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/inv" uuid="7f4c6cf4dcf79f9b0aa81c2eaf540405875714a3" name="inv_1" x="196" y="154">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/+" uuid="faedbea4612d9bd3644d6d3bf31946d848a70e19" name="+c_2" x="252" y="154">
      <params/>
      <attribs/>
   </obj>
   <obj type="dist/rectifier" sha="6a81663bcc6a29c922883f499193baff3d14c5d" name="rectifier_2" x="322" y="154">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/-" uuid="832edca3a945aa25ae1875d277bdd12d6709031a" name="-_1" x="392" y="154">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/muls 8" uuid="910989ec4cbbf3e9ac50429a9f27dc336f63ddd3" name="muls_2" x="392" y="210">
      <params/>
      <attribs/>
   </obj>
   <obj type="patch/outlet a" sha="72226293648dde4dd4739bc1b8bc46a6bf660595" name="outlet_1" x="392" y="252">
      <params/>
      <attribs/>
   </obj>
   <nets>
      <net>
         <source obj="level" outlet="out"/>
         <dest obj="nointerp_1" inlet="i"/>
      </net>
      <net>
         <source obj="nointerp_1" outlet="o"/>
         <dest obj="+c_1" inlet="in2"/>
         <dest obj="muls_1" inlet="in"/>
         <dest obj="-_1" inlet="in2"/>
      </net>
      <net>
         <source obj="rectifier_1" outlet="out"/>
         <dest obj="inv_1" inlet="in"/>
      </net>
      <net>
         <source obj="rectifier_2" outlet="out"/>
         <dest obj="-_1" inlet="in1"/>
      </net>
      <net>
         <source obj="in" outlet="inlet"/>
         <dest obj="div_1" inlet="in"/>
      </net>
      <net>
         <source obj="div_1" outlet="out"/>
         <dest obj="+c_1" inlet="in1"/>
      </net>
      <net>
         <source obj="+c_1" outlet="out"/>
         <dest obj="rectifier_1" inlet="in"/>
      </net>
      <net>
         <source obj="muls_1" outlet="out"/>
         <dest obj="+c_2" inlet="in2"/>
      </net>
      <net>
         <source obj="-_1" outlet="out"/>
         <dest obj="muls_2" inlet="in"/>
      </net>
      <net>
         <source obj="inv_1" outlet="out"/>
         <dest obj="+c_2" inlet="in1"/>
      </net>
      <net>
         <source obj="muls_2" outlet="out"/>
         <dest obj="outlet_1" inlet="outlet"/>
      </net>
      <net>
         <source obj="+c_2" outlet="out"/>
         <dest obj="rectifier_2" inlet="in"/>
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
   </settings>
   <notes><![CDATA[Symmetrical hard clipping]]></notes>
   <windowPos>
      <x>525</x>
      <y>362</y>
      <width>702</width>
      <height>548</height>
   </windowPos>
</patch-1.0>