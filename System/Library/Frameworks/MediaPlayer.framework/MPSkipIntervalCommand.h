/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPSkipIntervalCommand : MPRemoteCommand {

	NSArray* _preferredIntervals;

}

@property (nonatomic,copy) NSArray * preferredIntervals;              //@synthesize preferredIntervals=_preferredIntervals - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setPreferredIntervals:(NSArray *)arg1 ;
-(id)newCommandEventWithInterval:(double)arg1 ;
-(NSArray *)preferredIntervals;
@end

