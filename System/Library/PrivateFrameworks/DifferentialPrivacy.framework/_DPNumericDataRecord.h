/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/_DPJSONString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSManagedObjectID;

@interface _DPNumericDataRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding> {

	BOOL _submitted;
	NSString* _key;
	double _clearNumber;
	double _privateNumber;
	double _creationDate;
	NSManagedObjectID* _objectId;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double clearNumber;                        //@synthesize clearNumber=_clearNumber - In the implementation block
@property (assign,nonatomic) double privateNumber;                      //@synthesize privateNumber=_privateNumber - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)createRecordFromManagedObject:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(id)entityName;
-(NSManagedObjectID *)objectId;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(BOOL)submitted;
-(id)jsonString;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(id)initWithKey:(id)arg1 clearNumber:(double)arg2 privateNumber:(double)arg3 creationDate:(double)arg4 submitted:(BOOL)arg5 objectId:(id)arg6 ;
-(double)privateNumber;
-(double)clearNumber;
-(BOOL)isEqualToNumericDataRecord:(id)arg1 ;
-(void)setClearNumber:(double)arg1 ;
-(void)setPrivateNumber:(double)arg1 ;
@end

