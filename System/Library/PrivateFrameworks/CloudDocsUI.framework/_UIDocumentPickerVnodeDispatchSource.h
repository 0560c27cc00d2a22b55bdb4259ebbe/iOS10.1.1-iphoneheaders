/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_source, _UIDocumentPickerVnodeDispatchSourceDelegate;
@class NSObject, NSURL;

@interface _UIDocumentPickerVnodeDispatchSource : NSObject <NSCopying> {

	NSObject*<OS_dispatch_source> _source;
	id<_UIDocumentPickerVnodeDispatchSourceDelegate> _target;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url; 
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)event;
-(id)initWithTarget:(id)arg1 url:(id)arg2 queue:(id)arg3 ;
@end
