/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAudioPlayerDelegate, OS_dispatch_queue;
#import <AVFAudio/AVFAudio-Structs.h>
@class NSData, NSURL, NSDictionary, AVAudioFormat, NSArray, AVAudioSession, NSObject;

@interface AudioPlayerImpl : NSObject {

	id<AVAudioPlayerDelegate> _delegate;
	NSData* _data;
	NSURL* _url;
	NSDictionary* _actualSettings;
	AVAudioFormat* _format;
	BOOL _playRetain;
	NSArray* _channelAssignments;
	AVAudioSession* _audioSession;
	AVAudioPlayerCpp* _localPlayer;
	NSObject*<OS_dispatch_queue> _gcd;

}
-(id)init;
-(void)dealloc;
@end

