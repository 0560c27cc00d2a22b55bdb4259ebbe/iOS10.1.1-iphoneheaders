/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuota/_ICQPageSpecification.h>

@class NSDictionary, NSString, NSArray, ICQLink;

@interface _ICQUpgradeOfferPageSpecification : _ICQPageSpecification {

	NSDictionary* _serverDict;
	NSString* _title;
	NSString* _message;
	NSArray* _services;
	ICQLink* _purchaseLink;
	ICQLink* _learnMoreLink;
	NSString* _finePrintFormat;
	NSArray* _finePrintLinks;

}

@property (nonatomic,readonly) NSDictionary * serverDict;              //@synthesize serverDict=_serverDict - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                       //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSArray * services;                       //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) ICQLink * purchaseLink;                   //@synthesize purchaseLink=_purchaseLink - In the implementation block
@property (nonatomic,retain) ICQLink * learnMoreLink;                  //@synthesize learnMoreLink=_learnMoreLink - In the implementation block
@property (nonatomic,retain) NSString * finePrintFormat;               //@synthesize finePrintFormat=_finePrintFormat - In the implementation block
@property (nonatomic,retain) NSArray * finePrintLinks;                 //@synthesize finePrintLinks=_finePrintLinks - In the implementation block
+(id)upgradeOfferPageSpecificationSampleForLevel:(long long)arg1 ;
-(id)pageIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(id)debugDescription;
-(NSString *)title;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(NSDictionary *)serverDict;
-(void)setPurchaseLink:(ICQLink *)arg1 ;
-(void)setLearnMoreLink:(ICQLink *)arg1 ;
-(void)setFinePrintFormat:(NSString *)arg1 ;
-(void)setFinePrintLinks:(NSArray *)arg1 ;
-(ICQLink *)purchaseLink;
-(ICQLink *)learnMoreLink;
-(NSString *)finePrintFormat;
-(NSArray *)finePrintLinks;
@end

