/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioUnitMIDIInstrument.h>

@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument

@property (assign,nonatomic) float stereoPan; 
@property (assign,nonatomic) float masterGain; 
@property (assign,nonatomic) float globalTuning; 
-(id)init;
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(BOOL)loadInstrumentAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadSoundBankInstrumentAtURL:(id)arg1 program:(unsigned char)arg2 bankMSB:(unsigned char)arg3 bankLSB:(unsigned char)arg4 error:(id*)arg5 ;
-(BOOL)loadAudioFilesAtURLs:(id)arg1 error:(id*)arg2 ;
-(float)stereoPan;
-(float)masterGain;
-(float)globalTuning;
-(void)setStereoPan:(float)arg1 ;
-(void)setMasterGain:(float)arg1 ;
-(void)setGlobalTuning:(float)arg1 ;
@end

