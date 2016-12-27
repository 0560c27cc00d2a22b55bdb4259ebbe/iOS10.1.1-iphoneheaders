/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSDInfoGeometry;


@protocol TSDInfo <NSObject,TSKModel,TSPCopying,TSDInfoUsingObjectPlaceholderGeometry>
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@optional
-(id)uuidPathPrefixComponentsProvider;
-(id)collaboratorCursorForSelectionPath:(id)arg1;
-(BOOL)needsDownload;

@required
-(Class)repClass;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isAttachedToBodyText;
-(BOOL)isThemeContent;
-(BOOL)isInlineWithText;
-(void)setPrimitiveGeometry:(id)arg1;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
-(void)setParentInfo:(id)arg1;
-(void)setOwningAttachment:(id)arg1;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(id)arg1;
-(BOOL)isSelectable;
-(Class)layoutClass;

@end

