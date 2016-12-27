/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSArray, PSQuotaInfo, NSString;

@interface QuotaInfoResponse : AAResponse {

	BOOL _basicAccount;
	NSDictionary* _quotaInfoDict;
	NSDictionary* _storageInfo;
	NSDictionary* _accountStatus;
	NSDictionary* _urls;
	NSArray* _topToolbarItems;
	NSArray* _otherToolbarItems;
	BOOL _detailed;
	PSQuotaInfo* _quotaInfo;

}

@property (nonatomic,readonly) NSString * manageStorageURLString; 
@property (nonatomic,readonly) NSString * appDetailsURLString; 
@property (nonatomic,readonly) NSString * totalStorageText; 
@property (nonatomic,readonly) NSString * availableStorageText; 
@property (nonatomic,readonly) NSDictionary * accountStatus;                   //@synthesize accountStatus=_accountStatus - In the implementation block
@property (getter=isDetailed,nonatomic,readonly) BOOL detailed;                //@synthesize detailed=_detailed - In the implementation block
@property (nonatomic,retain,readonly) PSQuotaInfo * quotaInfo;                 //@synthesize quotaInfo=_quotaInfo - In the implementation block
-(NSString *)totalStorageText;
-(id)storageFooter:(BOOL)arg1 ;
-(BOOL)hasPurchasedMoreStorage;
-(NSString *)availableStorageText;
-(NSString *)appDetailsURLString;
-(id)_sizeStringFromBytes:(id)arg1 ;
-(unsigned long long)availableStorage;
-(NSString *)manageStorageURLString;
-(BOOL)isDetailed;
-(PSQuotaInfo *)quotaInfo;
-(unsigned long long)totalStorage;
-(unsigned long long)usedStorage;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSDictionary *)accountStatus;
@end

