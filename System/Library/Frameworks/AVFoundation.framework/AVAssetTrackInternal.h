/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVAssetTrackInspector;

@interface AVAssetTrackInternal : NSObject {

	AVWeakReference* weakReferenceToSelf;
	AVAssetTrackInspector* trackInspector;
	AVWeakReference* assetWeakReference;
	AVWeakReference* figAssetTrackNotificationListenerWeakReference;
	OpaqueFigAssetTrackRef figAssetTrackNotificationSource;

}
@end

