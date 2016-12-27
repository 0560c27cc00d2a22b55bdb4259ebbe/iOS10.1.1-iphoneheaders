/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/DuetKnowledgeMonitor-Structs.h>
#import <DuetKnowledgeMonitor/_DKMonitor.h>

@interface _DKNowPlayingMonitor : _DKMonitor {

	BOOL _lastIsPlayingStatus;

}

@property (assign,nonatomic) BOOL lastIsPlayingStatus;              //@synthesize lastIsPlayingStatus=_lastIsPlayingStatus - In the implementation block
+(/*^block*/id)_eventFilterBlock;
+(void)setIsPlayingStatus:(BOOL)arg1 bundleId:(id)arg2 track:(id)arg3 ;
+(id)_eventWithBundleIdentifier:(id)arg1 info:(id)arg2 isPlaying:(BOOL)arg3 ;
+(id)_metadataFromInfo:(id)arg1 isPlaying:(BOOL)arg2 ;
+(id)eventStream;
+(id)entitlements;
-(void)_nowPlayingInfoDidChange:(MROriginRef)arg1 ;
-(void)_registerForNowPlayingNotifications;
-(BOOL)lastIsPlayingStatus;
-(void)setLastIsPlayingStatus:(BOOL)arg1 ;
-(id)init;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
@end

