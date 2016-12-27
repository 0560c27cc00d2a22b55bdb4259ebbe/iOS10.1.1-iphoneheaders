/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <libobjc.A.dylib/_UIDocumentPickerDirectoryObserverItem.h>

@class _UIDocumentPickerURLContainerModel, NSOperation, NSMapTable, _UIDocumentPickerContainerModel, NSString, NSURL, NSDate;

@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem> {

	_UIDocumentPickerURLContainerModel* _model;
	_UIDocumentPickerURLContainerModel* _weak_model;
	long long _modelDisplayCount;
	id _resourceIdentifier;
	NSOperation* _thumbnailLoadOperation;
	BOOL _pickable;
	long long _type;
	NSMapTable* _thumbnailsBySize;
	_UIDocumentPickerContainerModel* _parentModel;
	NSString* _pickabilityReason;

}

@property (nonatomic,retain) NSMapTable * thumbnailsBySize;                                     //@synthesize thumbnailsBySize=_thumbnailsBySize - In the implementation block
@property (assign,nonatomic) BOOL pickable;                                                     //@synthesize pickable=_pickable - In the implementation block
@property (assign,nonatomic,__weak) _UIDocumentPickerContainerModel * parentModel;              //@synthesize parentModel=_parentModel - In the implementation block
@property (nonatomic,copy) NSString * pickabilityReason;                                        //@synthesize pickabilityReason=_pickabilityReason - In the implementation block
@property (nonatomic,readonly) long long type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,retain,readonly) NSString * subtitle; 
@property (nonatomic,retain,readonly) NSString * subtitle2; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,retain,readonly) NSURL * urlInLocalContainer; 
@property (nonatomic,readonly) NSDate * sortDate; 
@property (nonatomic,readonly) BOOL renameable; 
@property (nonatomic,retain,readonly) _UIDocumentPickerContainerModel * model; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_lruThumbnailArray;
+(void)markThumbnailAsRecentlyUsed:(id)arg1 ;
+(id)_blockingFolderIconForURL:(id)arg1 container:(id)arg2 size:(CGSize)arg3 scale:(double)arg4 ;
+(id)_blockingThumbnailForItem:(id)arg1 documentProxy:(id)arg2 withSize:(CGSize)arg3 scale:(double)arg4 wantsBorder:(BOOL*)arg5 generatedThumbnail:(BOOL*)arg6 ;
+(void)clearLRUThumbnailCache;
+(id)_blockingIconForDocumentProxy:(id)arg1 withSize:(CGSize)arg2 ;
+(id)_blockingBadgeForContainer:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
+(id)_blockingIconForURL:(id)arg1 withSize:(CGSize)arg2 ;
-(id)tags;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSURL *)url;
-(NSString *)title;
-(long long)type;
-(_UIDocumentPickerContainerModel *)model;
-(NSString *)subtitle;
-(unsigned long long)indentationLevel;
-(id)modificationDate;
-(id)contentType;
-(NSDate *)sortDate;
-(void)decrementModelDisplayCount;
-(BOOL)pickable;
-(void)incrementModelDisplayCount;
-(BOOL)isActionApplicableForItem:(long long)arg1 ;
-(NSString *)pickabilityReason;
-(BOOL)renameable;
-(BOOL)isAlias;
-(NSURL *)urlInLocalContainer;
-(id)_formattedSubtitleForNumberOfItems:(unsigned long long)arg1 ;
-(NSString *)subtitle2;
-(void)_modelChanged;
-(id)sortPath;
-(void)setParentModel:(_UIDocumentPickerContainerModel *)arg1 ;
-(void)setPickable:(BOOL)arg1 ;
-(void)setPickabilityReason:(NSString *)arg1 ;
-(_UIDocumentPickerContainerModel *)parentModel;
-(id)_createThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)_blockingThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 wantsBorder:(BOOL*)arg3 ;
-(id)_resourceIdentifier;
-(id)_blipWithTags:(id)arg1 height:(double)arg2 scale:(double)arg3 ;
-(void)_ensureModelPresent;
-(void)modelChanged;
-(id)thumbnailWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)tagBlipsWithHeight:(double)arg1 scale:(double)arg2 ;
-(id)sortTag;
-(NSMapTable *)thumbnailsBySize;
-(void)setThumbnailsBySize:(NSMapTable *)arg1 ;
@end

