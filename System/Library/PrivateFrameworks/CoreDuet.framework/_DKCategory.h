/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>
#import <libobjc.A.dylib/_DKHasObjectType.h>

@class _DKCategoryType, NSString;

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType> {

	long long _integerValue;
	_DKCategoryType* _categoryType;

}

@property (assign) long long integerValue;                          //@synthesize integerValue=_integerValue - In the implementation block
@property (retain) _DKCategoryType * categoryType;                  //@synthesize categoryType=_categoryType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)categoryWithInteger:(long long)arg1 type:(id)arg2 ;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)_categoryFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)entityName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)integerValue;
-(double)doubleValue;
-(_DKCategoryType *)categoryType;
-(id)stringValue;
-(void)setCategoryType:(_DKCategoryType *)arg1 ;
-(id)primaryValue;
-(id)initWithInteger:(long long)arg1 type:(id)arg2 cache:(id)arg3 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(void)setIntegerValue:(long long)arg1 ;
-(id)objectType;
-(long long)compareValue:(id)arg1 ;
@end

