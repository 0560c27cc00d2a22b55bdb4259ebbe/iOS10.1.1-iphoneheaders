/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface _DKObject : NSObject <NSSecureCoding> {

	NSUUID* _UUID;
	NSDictionary* _metadata;

}

@property (retain) NSUUID * UUID;                      //@synthesize UUID=_UUID - In the implementation block
@property (copy) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)fetchObjectWithUUID:(id)arg1 context:(id)arg2 ;
+(id)entityName;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)integerValue;
-(double)doubleValue;
-(BOOL)boolValue;
-(NSUUID *)UUID;
-(id)stringValue;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)metadataFromData:(id)arg1 cache:(id)arg2 ;
-(id)metadataFromData:(id)arg1 ;
-(BOOL)copyBaseObjectInfoFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)entityName;
-(void)setUUID:(NSUUID *)arg1 ;
@end

