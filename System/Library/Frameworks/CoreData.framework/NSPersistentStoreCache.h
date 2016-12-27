/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface NSPersistentStoreCache : NSObject {

	id _externalData;
	unsigned long long _capacity;
	SCD_Struct_NS13* _externalDataValueCallbacks;
	struct {
		unsigned _preserveToManyRelationships : 1;
		unsigned _reserved : 31;
	}  _persistentStoreCacheFlags;
	int _lock;

}
+(void)initialize;
-(void)registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 options:(unsigned)arg5 andTimestamp:(double)arg6 ;
-(void)incrementRefCountForObjectID:(id)arg1 ;
-(void)decrementRefCountForObjectID:(id)arg1 ;
-(id)rowForObjectID:(id)arg1 afterTimestamp:(double)arg2 ;
-(void)registerRow:(id)arg1 forObjectID:(id)arg2 options:(unsigned)arg3 ;
-(void)forgetRowForObjectID:(id)arg1 ;
-(id)toManyForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3 ;
-(void)_createExternalDataDictWithValueCallbacks:(void*)arg1 ;
-(id)initWithValueCallbacks:(void*)arg1 preserveToManyRelationships:(BOOL)arg2 ;
-(void)_forgetRowForObjectID:(id)arg1 ;
-(void)_registerRow:(id)arg1 forObjectID:(id)arg2 options:(unsigned)arg3 ;
-(void)_registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 options:(unsigned)arg5 andTimestamp:(double)arg6 ;
-(id)initWithPersistentStore:(id)arg1 ;
-(void)growRegistrationCollectionTo:(unsigned long long)arg1 ;
-(void)forgetAllExternalData;
-(int)refCountForObjectID:(id)arg1 ;
-(void)registerRow:(id)arg1 forObjectID:(id)arg2 ;
-(id)rowForObjectID:(id)arg1 ;
-(void)registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 andTimestamp:(double)arg5 ;
-(id)toManyInformationForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3 ;
-(id)ancillaryOrderKeysForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3 ;
-(id)init;
-(void)dealloc;
@end

