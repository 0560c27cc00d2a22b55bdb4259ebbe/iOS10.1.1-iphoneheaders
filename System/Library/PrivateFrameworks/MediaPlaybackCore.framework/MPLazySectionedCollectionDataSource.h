/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPLazySectionedCollectionDataSource <NSObject>
@optional
-(id)sectionIndexTitles;
-(NSRange*)optionalSectionIndexTitlesRange;
-(long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
-(BOOL)hasSameContentAsDataSource:(id)arg1;

@required
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
-(unsigned long long)numberOfSections;
-(id)sectionAtIndex:(unsigned long long)arg1;
-(id)itemAtIndexPath:(id)arg1;

@end
