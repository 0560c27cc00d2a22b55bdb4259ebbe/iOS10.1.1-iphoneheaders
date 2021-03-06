/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface DSArchivePath : NSObject {

	BOOL _root;
	NSURL* _sourceUrl;
	NSString* _prefix;

}

@property (nonatomic,retain) NSURL * sourceUrl;              //@synthesize sourceUrl=_sourceUrl - In the implementation block
@property (nonatomic,retain) NSString * prefix;              //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) BOOL root;                      //@synthesize root=_root - In the implementation block
+(id)archivePathWithSource:(id)arg1 prefix:(id)arg2 root:(BOOL)arg3 ;
-(NSURL *)sourceUrl;
-(void)setSourceUrl:(NSURL *)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(void)setRoot:(BOOL)arg1 ;
-(BOOL)root;
-(id)initWithSource:(id)arg1 prefix:(id)arg2 root:(BOOL)arg3 ;
@end

