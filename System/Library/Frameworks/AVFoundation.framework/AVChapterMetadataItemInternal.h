/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, NSMutableArray, NSObject;

@interface AVChapterMetadataItemInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigAssetRef figAsset;
	long long chapterGroupIndex;
	long long chapterIndex;
	NSString* chapterType;
	NSString* extendedLanguageTag;
	NSString* languageCode;
	NSString* chapterDataType;
	id<NSObject><NSCopying> value;
	SCD_Struct_AV2 time;
	SCD_Struct_AV2 duration;
	long long valueStatus;
	int valueErrorCode;
	NSMutableArray* completions;
	NSObject*<OS_dispatch_queue> readWriteQueue;

}
@end

