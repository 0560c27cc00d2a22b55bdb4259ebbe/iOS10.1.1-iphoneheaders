/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSEntityMapping, NSMutableDictionary, NSSQLEntity, NSMutableArray;

@interface _NSSQLEntityMigrationDescription : NSObject {

	NSEntityMapping* _entityMapping;
	NSMutableDictionary* _sqlValuesByColumnName;
	NSMutableDictionary* _sourceEntitiesByToOneWithNewEntityKey;
	NSSQLEntity* _dstEntity;
	NSSQLEntity* _srcEntity;
	int _migrationType;
	NSMutableArray* _addedManyToManys;
	NSMutableArray* _removedManyToManys;
	NSMutableArray* _transformedManyToManys;
	NSMutableArray* _processedTransforms;
	NSMutableArray* _pendingTransforms;

}

@property (readonly) NSSQLEntity * sourceEntity;                   //@synthesize srcEntity=_srcEntity - In the implementation block
@property (readonly) NSSQLEntity * destinationEntity;              //@synthesize dstEntity=_dstEntity - In the implementation block
@property (readonly) NSEntityMapping * entityMapping;              //@synthesize entityMapping=_entityMapping - In the implementation block
@property (readonly) int migrationType;                            //@synthesize migrationType=_migrationType - In the implementation block
-(NSSQLEntity *)destinationEntity;
-(void)_populateSQLValuesByPropertyFromTransforms:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(NSSQLMigrationContext)arg1 ;
-(NSEntityMapping *)entityMapping;
-(void)_populateSQLValuesForDestinationToOne:(id)arg1 fromSourceToOne:(id)arg2 ;
-(id)_unmappedRelationshipForFormerlyVirtualToOne:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)_generateSQLValueMappingsWithMigrationContext:(NSSQLMigrationContext)arg1 ;
-(id)initWithEntityMapping:(id)arg1 sourceEntity:(id)arg2 destinationEntity:(id)arg3 ;
-(id)sourceEntitiesByToOneWithNewEntityKey;
-(id)sqlValueForColumnName:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)addedManyToManys;
-(id)removedManyToManys;
-(id)transformedManyToManys;
-(id)nextPropertyTransform;
-(int)migrationType;
-(void)dealloc;
-(id)description;
-(NSSQLEntity *)sourceEntity;
@end

