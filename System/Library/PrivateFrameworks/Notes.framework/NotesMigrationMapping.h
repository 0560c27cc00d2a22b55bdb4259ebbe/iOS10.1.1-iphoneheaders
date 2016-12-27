/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel, NSArray, NSString;

@interface NotesMigrationMapping : NSObject {

	NSManagedObjectModel* _destinationModel;
	NSArray* _sourceModels;
	NSString* _descriptionString;
	long long _type;

}

@property (copy) NSArray * sourceModels;                                 //@synthesize sourceModels=_sourceModels - In the implementation block
@property (copy) NSString * descriptionString;                           //@synthesize descriptionString=_descriptionString - In the implementation block
@property (retain) NSManagedObjectModel * destinationModel;              //@synthesize destinationModel=_destinationModel - In the implementation block
@property (assign) long long type;                                       //@synthesize type=_type - In the implementation block
+(id)inferredMappingFromSourceModelNames:(id)arg1 toDestinationModelName:(id)arg2 ;
+(id)customMappingFromSourceModelName:(id)arg1 toDestinationModelName:(id)arg2 ;
+(id)modelForModelName:(id)arg1 ;
+(id)descriptionStringFromSourceStoreNames:(id)arg1 destinationStoreName:(id)arg2 ;
+(id)mappings;
-(NSManagedObjectModel *)destinationModel;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)descriptionString;
-(void)setDescriptionString:(NSString *)arg1 ;
-(BOOL)canMigrateStoreMetadata:(id)arg1 ;
-(id)sourceModelForStoreMetadata:(id)arg1 ;
-(id)mappingModelForStoreMetadata:(id)arg1 ;
-(void)setSourceModels:(NSArray *)arg1 ;
-(void)setDestinationModel:(NSManagedObjectModel *)arg1 ;
-(NSArray *)sourceModels;
@end

