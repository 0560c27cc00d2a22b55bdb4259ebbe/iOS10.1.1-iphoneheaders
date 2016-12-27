/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@interface MiroSmartMusicUtilities : NSObject
+(double)normalizeGainForRendition:(id)arg1 ;
+(id)metadataItemAtTime:(SCD_Struct_Mi1)arg1 fromMetadataItems:(id)arg2 findNearest:(BOOL)arg3 ;
+(id)beatMetadataItemForBeatIndex:(long long)arg1 andBarIndex:(long long)arg2 nearBeatMetadataItem:(id)arg3 fromBeatMetadataItems:(id)arg4 ;
+(id)_peakAndLoudnessForRendition:(id)arg1 ;
+(id)metadataItemAtTime:(SCD_Struct_Mi1)arg1 fromMetadataItems:(id)arg2 ;
+(double)averageBarDurationForFlexAudioClipInSeconds:(id)arg1 ;
+(SCD_Struct_Mi1)averageBarDurationForFlexAudioClip:(id)arg1 ;
+(SCD_Struct_Mi1)durationOfOutroForFlexAudioClip:(id)arg1 ;
+(SCD_Struct_Mi1)durationOfIntroForFlexAudioClip:(id)arg1 ;
@end

