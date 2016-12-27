/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSString, NSPropertyDescription, NSSQLEntity;

@interface NSSQLProperty : NSStoreMapping {

	NSString* _name;
	NSPropertyDescription* _propertyDescription;
	NSSQLEntity* _entity;
	unsigned _propertyType;

}
-(BOOL)isManyToMany;
-(BOOL)isToOne;
-(id)columnName;
-(unsigned)slot;
-(id)externalName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(BOOL)isRelationship;
-(void)setEntityForReadOnlyFetch:(id)arg1 ;
-(void)setPropertyDescription:(id)arg1 ;
-(BOOL)isAttribute;
-(BOOL)isForeignKey;
-(BOOL)isForeignEntityKey;
-(BOOL)isForeignOrderKey;
-(BOOL)isEntityKey;
-(BOOL)isOptLockKey;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)name;
-(void)_setName:(id)arg1 ;
-(id)entity;
-(BOOL)isToMany;
-(unsigned)propertyType;
-(BOOL)isPrimaryKey;
-(id)propertyDescription;
-(BOOL)isColumn;
@end

