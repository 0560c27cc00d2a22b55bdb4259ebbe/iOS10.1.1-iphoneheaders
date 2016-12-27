/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID, NSString;

@interface CKRecordZoneSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (nonatomic,copy,readonly) CKRecordZoneID * zoneID; 
@property (nonatomic,copy) NSString * recordType; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithZoneID:(id)arg1 ;
-(id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 ;
@end

