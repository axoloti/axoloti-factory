<patch-1.0 appVersion="1.0.10">
   <obj type="patch/bankindex" uuid="943bd281-10a5-4994-9876-11a3b1fbde8a" name="bankindex_1" x="70" y="28">
      <params/>
      <attribs/>
   </obj>
   <obj type="gpio/in/button1" uuid="2f4fbacf3969a3a1ff9d23899566430051cb01f" name="button1_1" x="14" y="84">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/+1" uuid="13c1a4574bb81783beb8839e81782b9a34e3fc17" name="+1_1" x="126" y="84">
      <params/>
      <attribs/>
   </obj>
   <obj type="patch/load i" uuid="b79124f5b7d1e8b39e187677ddab6260ce8c60a3" name="load_1" x="196" y="84">
      <params/>
      <attribs/>
   </obj>
   <obj type="gpio/in/button2" uuid="e844813dc6e022223cd10d8beb29b62732231867" name="button2_1" x="14" y="140">
      <params/>
      <attribs/>
   </obj>
   <obj type="math/-1" uuid="5fd46bab471bb6509ae83de702dea72933683a98" name="-1_1" x="126" y="140">
      <params/>
      <attribs/>
   </obj>
   <obj type="patch/load i" uuid="b79124f5b7d1e8b39e187677ddab6260ce8c60a3" name="load_2" x="196" y="140">
      <params/>
      <attribs/>
   </obj>
   <nets>
      <net>
         <source obj="bankindex_1" outlet="index"/>
         <dest obj="+1_1" inlet="a"/>
         <dest obj="-1_1" inlet="a"/>
      </net>
      <net>
         <source obj="+1_1" outlet="result"/>
         <dest obj="load_1" inlet="i"/>
      </net>
      <net>
         <source obj="button1_1" outlet="out"/>
         <dest obj="load_1" inlet="trig"/>
      </net>
      <net>
         <source obj="-1_1" outlet="result"/>
         <dest obj="load_2" inlet="i"/>
      </net>
      <net>
         <source obj="button2_1" outlet="out"/>
         <dest obj="load_2" inlet="trig"/>
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
   </settings>
   <notes><![CDATA[Controller object. To use this: in file->preferences, enter "cycle buttons" in the "controller object" field.
Cycles through patches in a patch bank by using buttons S1/S2.
Push S1 to launch the next patch in the patch bank.
Push S2 to launch the previous patch in the patch bank.
]]></notes>
   <windowPos>
      <x>629</x>
      <y>749</y>
      <width>823</width>
      <height>400</height>
   </windowPos>
</patch-1.0>