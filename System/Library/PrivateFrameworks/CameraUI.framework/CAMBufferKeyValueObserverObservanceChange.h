/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMBufferObservanceChange.h>

@class NSString, NSObject, NSDictionary;

@interface CAMBufferKeyValueObserverObservanceChange : CAMBufferObservanceChange {

	NSString* _keyPath;
	NSObject* _object;
	NSDictionary* _change;

}

@property (nonatomic,copy,readonly) NSString * keyPath;                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,__weak,readonly) NSObject * object;                //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * change;              //@synthesize change=_change - In the implementation block
-(NSObject *)object;
-(NSString *)keyPath;
-(NSDictionary *)change;
-(id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withChange:(id)arg3 ;
@end

