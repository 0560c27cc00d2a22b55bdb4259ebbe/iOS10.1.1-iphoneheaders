/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTreeNode.h>
#import <SpringBoard/SBIconIndexNode.h>
#import <SpringBoard/SBIconIndexMutableListObserver.h>
#import <SpringBoard/SBIconListModelObserver.h>

@class NSArray, NSString, SBFolderIcon, NSMutableSet, NSCountedSet, NSHashTable, SBIconIndexMutableList;

@interface SBFolder : NSObject <SBTreeNode, SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver> {

	NSString* _displayName;
	NSString* _defaultDisplayName;
	BOOL _displayNameDirty;
	BOOL _open;
	SBFolderIcon* _icon;
	BOOL _cancelable;
	NSMutableSet* _addedIcons;
	NSMutableSet* _removedIcons;
	NSCountedSet* _coalesceChangesRequests;
	unsigned long long _maxListCount;
	unsigned long long _maxIconCountInLists;
	NSHashTable* _nodeObservers;
	NSHashTable* _folderObservers;
	SBIconIndexMutableList* _lists;
	SBFolder* _parentFolder;

}

@property (nonatomic,copy) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                               //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) SBFolderIcon * icon;                            //@synthesize icon=_icon - In the implementation block
@property (assign,getter=isCancelable,nonatomic) BOOL cancelable;                   //@synthesize cancelable=_cancelable - In the implementation block
@property (assign,nonatomic,__weak) SBFolder * parentFolder;                        //@synthesize parentFolder=_parentFolder - In the implementation block
@property (nonatomic,copy,readonly) NSArray * lists; 
@property (nonatomic,readonly) unsigned long long listCount; 
@property (nonatomic,readonly) unsigned long long maxListCount; 
@property (nonatomic,readonly) unsigned long long maxIconCountInLists;              //@synthesize maxIconCountInLists=_maxIconCountInLists - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,__weak,readonly) id<SBTreeNode> parent; 
+(BOOL)isRootFolderClass;
-(id)visibleIcons;
-(id)indexPathForIcon:(id)arg1 ;
-(id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id*)arg2 ;
-(BOOL)canAddIcon;
-(void)startCoalescingContentChangesWithRequestID:(id)arg1 ;
-(void)stopCoalescingContentChangesForRequestID:(id)arg1 ;
-(id)indexPathForIconWithIdentifier:(id)arg1 ;
-(id)iconAtIndexPath:(id)arg1 ;
-(id)listContainingLeafIconWithIdentifier:(id)arg1 ;
-(id)placeIcon:(id)arg1 atIndexPath:(id*)arg2 ;
-(id)performCascadingIconInsertion:(id)arg1 indexPath:(id)arg2 ;
-(unsigned long long)maxListCount;
-(void)removeIconAtIndexPath:(id)arg1 ;
-(BOOL)compactLists;
-(void)compactIconsAndLists;
-(void)removeEmptyList:(id)arg1 ;
-(void)setCancelable:(BOOL)arg1 ;
-(id)nodeIdentifier;
-(id)indexPathForNodeIdentifier:(id)arg1 ;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(BOOL)shouldRemoveWhenEmpty;
-(id)iconsOfClass:(Class)arg1 ;
-(id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)arg1 ;
-(void)enumerateAllIconsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithMaxListCount:(unsigned long long)arg1 maxIconCountInLists:(unsigned long long)arg2 ;
-(id)leafIcons;
-(void)markIconStateClean;
-(id)insertIcon:(id)arg1 atIndexPath:(id*)arg2 ;
-(id)folderIcons;
-(id)orderedIcons;
-(id)indexPathForIcon:(id)arg1 includingPlaceholders:(BOOL)arg2 ;
-(BOOL)isIconStateDirty;
-(void)addNodeObserver:(id)arg1 ;
-(void)addFolderObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(void)removeFolderObserver:(id)arg1 ;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(unsigned long long)indexOfList:(id)arg1 ;
-(id)addEmptyList;
-(BOOL)_compactLists;
-(id)_listsForCompaction;
-(void)_removeLists:(id)arg1 ;
-(void)didAddFolder:(id)arg1 ;
-(void)_addList:(id)arg1 ;
-(void)didRemoveFolder:(id)arg1 ;
-(id)_createNewListWithIcon:(id)arg1 ;
-(Class)listModelClass;
-(id)performCascadingIconInsertion:(id)arg1 listIndex:(unsigned long long)arg2 iconIndex:(unsigned long long)arg3 ;
-(void)stopCoalescingContentChangesForRequestID:(id)arg1 forceReload:(BOOL)arg2 ;
-(BOOL)_isCoalescingContentChanges;
-(void)purgeLists;
-(void)iconList:(id)arg1 didRemoveIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didAddIcon:(id)arg2 ;
-(void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(id)defaultDisplayName;
-(void)setDefaultDisplayName:(id)arg1 ;
-(BOOL)canRemoveIcons;
-(BOOL)canEditDisplayName;
-(void)_setLists:(id)arg1 ;
-(id)listContainingIcon:(id)arg1 ;
-(unsigned long long)maxIconCountInLists;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isEmpty;
-(void)setIcon:(SBFolderIcon *)arg1 ;
-(SBFolderIcon *)icon;
-(NSString *)displayName;
-(id)listAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)addIcon:(id)arg1 ;
-(void)sort;
-(void)setOpen:(BOOL)arg1 ;
-(BOOL)isFull;
-(void)setParentFolder:(SBFolder *)arg1 ;
-(NSArray *)children;
-(id<SBTreeNode>)parent;
-(BOOL)isOpen;
-(BOOL)isCancelable;
-(BOOL)isRootFolder;
-(SBFolder *)parentFolder;
-(NSArray *)lists;
-(unsigned long long)listCount;
-(id)allIcons;
@end

