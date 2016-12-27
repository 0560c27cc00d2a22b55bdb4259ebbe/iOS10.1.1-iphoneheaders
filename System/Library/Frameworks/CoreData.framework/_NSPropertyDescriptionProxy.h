/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPropertyDescription, NSEntityDescription;

@interface _NSPropertyDescriptionProxy : NSObject {

	id _sourceBuffer;
	NSPropertyDescription* _underlyingProperty;
	NSEntityDescription* _entityDescription;
	unsigned _entitysReferenceIDForProperty;

}
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
-(unsigned)_entitysReferenceID;
-(id)_underlyingProperty;
-(void)_createCachesAndOptimizeState;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)_setEntity:(id)arg1 ;
-(void)_setEntitysReferenceID:(unsigned)arg1 ;
-(id)initWithPropertyDescription:(id)arg1 ;
-(Class)class;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)entity;
@end

