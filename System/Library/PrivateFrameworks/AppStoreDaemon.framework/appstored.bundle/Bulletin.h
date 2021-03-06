/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSURL, NSString;

@interface Bulletin : NSObject {

	NSDate* _date;
	unsigned long long _destinations;
	NSURL* _launchURL;
	NSString* _message;
	NSString* _recordID;
	NSString* _title;

}

@property (assign,nonatomic) unsigned long long destinations;              //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                              //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * recordID;                            //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
+(id)bulletinWithTitle:(id)arg1 message:(id)arg2 ;
-(id)newBulletinRequest;
-(id)initWithBulletinDictionary:(id)arg1 ;
-(id)copyBulletinDictionary;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(unsigned long long)destinations;
-(NSString *)recordID;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(NSURL *)launchURL;
-(NSDate *)creationDate;
-(void)setDestinations:(unsigned long long)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
@end

