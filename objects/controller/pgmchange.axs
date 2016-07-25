<patch-1.0 appVersion="1.0.10">
   <obj type="midi/in/pgm" uuid="6165409901fee4a0781b41bac3513f51c2120d67" name="pgm_1" x="14" y="14">
      <params/>
      <attribs/>
   </obj>
   <obj type="patch/load i" uuid="b79124f5b7d1e8b39e187677ddab6260ce8c60a3" name="load_1" x="112" y="14">
      <params/>
      <attribs/>
   </obj>
   <nets>
      <net>
         <source obj="pgm_1" outlet="o"/>
         <dest obj="load_1" inlet="i"/>
      </net>
      <net>
         <source obj="pgm_1" outlet="trig"/>
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
   <notes>Load patches via MIDI Program Change messages</notes>
   <windowPos>
      <x>884</x>
      <y>650</y>
      <width>674</width>
      <height>241</height>
   </windowPos>
</patch-1.0>