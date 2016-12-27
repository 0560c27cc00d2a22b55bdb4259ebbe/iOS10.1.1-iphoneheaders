/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSExtensionContext;

@interface CacheDeleteServiceInfo : NSObject {

	BOOL _doNotQuery;
	NSExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (assign) BOOL doNotQuery;                                                //@synthesize doNotQuery=_doNotQuery - In the implementation block
+(id)serviceInfoWithExtensionContext:(id)arg1 ;
-(NSExtensionContext *)extensionContext;
-(BOOL)doNotQuery;
-(void)setDoNotQuery:(BOOL)arg1 ;
-(id)initWithExtensionContext:(id)arg1 ;
@end

