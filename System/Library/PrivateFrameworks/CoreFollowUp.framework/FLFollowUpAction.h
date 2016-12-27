/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSData;

@interface FLFollowUpAction : NSObject <NSSecureCoding> {

	NSString* _label;
	NSURL* _url;
	NSURL* _launchActionURL;
	NSData* _launchActionArguments;
	unsigned long long _sqlID;

}

@property (assign,nonatomic) unsigned long long sqlID;              //@synthesize sqlID=_sqlID - In the implementation block
@property (copy) NSString * label;                                  //@synthesize label=_label - In the implementation block
@property (copy) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (copy) NSURL * launchActionURL;                           //@synthesize launchActionURL=_launchActionURL - In the implementation block
@property (copy) NSData * launchActionArguments;                    //@synthesize launchActionArguments=_launchActionArguments - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionWithLabel:(id)arg1 url:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithLabel:(id)arg1 url:(id)arg2 ;
-(NSURL *)launchActionURL;
-(void)setLaunchActionURL:(NSURL *)arg1 ;
-(NSData *)launchActionArguments;
-(void)setLaunchActionArguments:(NSData *)arg1 ;
-(unsigned long long)sqlID;
-(void)setSqlID:(unsigned long long)arg1 ;
@end
