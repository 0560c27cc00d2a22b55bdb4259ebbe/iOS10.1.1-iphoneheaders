/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSDictionary;

@interface _SYDeferredIncomingSession : NSObject {

	NSURL* _resourceURL;
	NSString* _identifier;
	NSDictionary* _metadata;

}

@property (nonatomic,copy) NSURL * resourceURL;                    //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,copy) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(void)setResourceURL:(NSURL *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSURL *)resourceURL;
@end

