/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/AudioClip.h>

@class FMSongRendition, FMSong;

@interface FlexAudioClip : AudioClip {

	FMSongRendition* _songRendition;
	FMSong* _song;

}

@property (nonatomic,retain) FMSong * song;                                //@synthesize song=_song - In the implementation block
@property (nonatomic,retain) FMSongRendition * songRendition;              //@synthesize songRendition=_songRendition - In the implementation block
@property (nonatomic,readonly) int sampleRate; 
+(id)optionsForSong:(id)arg1 withDuration:(double)arg2 ;
+(id)backgroundClipWithSong:(id)arg1 ;
-(id)init;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sampleRate;
-(void)setSong:(FMSong *)arg1 ;
-(FMSong *)song;
-(void)setSongUID:(id)arg1 ;
-(id)songUID;
-(int)clipType;
-(FMSongRendition *)songRendition;
-(int)rawSourceDuration;
-(void)outroStingerTime:(SCD_Struct_Mi1*)arg1 earlyFadeStartTime:(SCD_Struct_Mi1*)arg2 endTime:(SCD_Struct_Mi1*)arg3 ;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)refreshSong;
-(void)setSongRendition:(FMSongRendition *)arg1 ;
-(void)generateEdits;
@end
