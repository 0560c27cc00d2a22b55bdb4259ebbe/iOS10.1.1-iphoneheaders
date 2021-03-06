/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UsageSettings/UsageQuotaRequest.h>

@class NSArray;

@interface QuotaAppDetailsRequest : UsageQuotaRequest {

	NSArray* _bundleIds;
	NSArray* _bundleIDs;

}

@property (nonatomic,retain) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 bundleIDs:(id)arg3 quotaInfo:(id)arg4 ;
-(id)urlRequest;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
@end

