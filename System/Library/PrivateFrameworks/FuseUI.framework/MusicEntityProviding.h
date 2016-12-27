/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MusicEntityProviding <SKUIEntityProviding>
@optional
-(BOOL)setEditing:(BOOL)arg1;
-(BOOL)hasExplicitContent;
-(id)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(id)arg1;
-(BOOL)hasEntitiesNotInLibrary;
-(BOOL)hasMultipleEntitiesIncludingStoreContent;

@required
-(unsigned long long)numberOfSections;
-(BOOL)hasEntities;
-(id)entityValueProviderAtIndexPath:(id)arg1;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
-(id)indexPathForEntityValueContext:(id)arg1;

@end

