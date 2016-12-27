/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBViewControllerTransitionContextDelegate.h>
#import <SpringBoard/SBTreeNodeViewControllerDelegate.h>

@protocol SBTreeNode, SBTreeNodeViewControllerDelegate;
@class NSMutableArray, SBViewControllerTransitionContext, NSHashTable, NSArray, NSString;

@interface SBTreeNodeViewController : UIViewController <SBViewControllerTransitionContextDelegate, SBTreeNodeViewControllerDelegate> {

	id<SBTreeNode> _treeNode;
	id<SBTreeNode> _fromExpandedChildTreeNode;
	id<SBTreeNode> _toExpandedChildTreeNode;
	SBTreeNodeViewController* _fromExpandedViewController;
	SBTreeNodeViewController* _toExpandedViewController;
	NSMutableArray* _expandedTreeNodes;
	long long _currentTransitionOperation;
	SBViewControllerTransitionContext* _currentTransition;
	/*^block*/id _currentTransitionContinuation;
	/*^block*/id _clientOperationCompletion;
	NSHashTable* _transitionObservers;
	id<SBTreeNodeViewControllerDelegate> _delegate;
	SBTreeNodeViewController* _parentTreeNodeViewController;

}

@property (assign,nonatomic,__weak) SBTreeNodeViewController * parentTreeNodeViewController;                                             //@synthesize parentTreeNodeViewController=_parentTreeNodeViewController - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioning; 
@property (setter=_setFromExpandedViewController:,nonatomic,retain) SBTreeNodeViewController * _fromExpandedViewController; 
@property (setter=_setToExpandedViewController:,nonatomic,retain) SBTreeNodeViewController * _toExpandedViewController; 
@property (nonatomic,readonly) id<SBTreeNode> _fromExpandedTreeNode; 
@property (nonatomic,readonly) id<SBTreeNode> _toExpandedTreeNode; 
@property (nonatomic,readonly) id<SBTreeNode> _expandedTreeNode; 
@property (nonatomic,readonly) SBTreeNodeViewController * _expandedViewController; 
@property (nonatomic,retain) id<SBTreeNode> treeNode; 
@property (assign,nonatomic,__weak) id<SBTreeNodeViewControllerDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<SBTreeNode> containingExpandedTreeNode; 
@property (getter=isExpanded,nonatomic,readonly) BOOL expanded; 
@property (nonatomic,copy,readonly) NSArray * expandedTreeNodes; 
@property (nonatomic,readonly) id<SBTreeNode> effectiveExpandedTreeNode; 
@property (nonatomic,readonly) SBTreeNodeViewController * expandedChildViewController; 
@property (nonatomic,readonly) SBTreeNodeViewController * deepestExpandedDescendantViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillTransitionToSize:(CGSize)arg1 withContainingExpandedTreeNode:(id)arg2 transitionCoordinator:(id)arg3 ;
-(SBTreeNodeViewController *)expandedChildViewController;
-(void)setParentTreeNodeViewController:(SBTreeNodeViewController *)arg1 ;
-(void)removeChildTreeNodeViewController:(id)arg1 ;
-(void)_setFromExpandedViewController:(id)arg1 ;
-(void)_setToExpandedViewController:(id)arg1 ;
-(void)_setExpandedTreeNode:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id<SBTreeNode>)treeNode;
-(void)popExpandedTreeNodeAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)pushExpandedTreeNode:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_rootParentViewController;
-(id<SBTreeNode>)effectiveExpandedTreeNode;
-(id<SBTreeNode>)_expandedTreeNode;
-(SBTreeNodeViewController *)_expandedViewController;
-(id<SBTreeNode>)containingExpandedTreeNode;
-(BOOL)isExpandedForContainingExpandedTreeNode:(id)arg1 ;
-(void)_handleWillAddChildViewController:(id)arg1 ;
-(void)_handleRemoveChildViewController:(id)arg1 ;
-(CGRect)frameForChildTreeNodeViewController:(id)arg1 inState:(long long)arg2 withParentContainerSize:(CGSize)arg3 ;
-(id)treeNodeViewController:(id)arg1 viewControllerForChildTreeNode:(id)arg2 ;
-(void)treeNodeViewController:(id)arg1 selectedChildTreeNode:(id)arg2 ;
-(void)treeNodeViewController:(id)arg1 dismissedChildTreeNode:(id)arg2 ;
-(id)treeNodeViewController:(id)arg1 targetExpandedTreeNodeForProposedTreeNode:(id)arg2 ;
-(id)treeNodeViewController:(id)arg1 destinationExpandedTreeNodeForTargetTreeNode:(id)arg2 ;
-(id)treeNodeViewController:(id)arg1 animationControllerForOperation:(long long)arg2 animated:(BOOL)arg3 fromViewController:(id)arg4 fromTreeNode:(id)arg5 toViewController:(id)arg6 toTreeNode:(id)arg7 ;
-(id)treeNodeViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(void)treeNodeViewController:(id)arg1 willPerformOperation:(long long)arg2 fromViewController:(id)arg3 fromTreeNode:(id)arg4 toViewController:(id)arg5 toTreeNode:(id)arg6 withTransitionCoordinator:(id)arg7 ;
-(SBTreeNodeViewController *)_fromExpandedViewController;
-(void)_updateStateForViewController:(id)arg1 ;
-(SBTreeNodeViewController *)_toExpandedViewController;
-(void)_setFinalStateForViewController:(id)arg1 ;
-(id<SBTreeNode>)_fromExpandedTreeNode;
-(id<SBTreeNode>)_toExpandedTreeNode;
-(BOOL)_shouldAddViewController:(id)arg1 afterTransitionFromViewController:(id)arg2 toViewController:(id)arg3 canceled:(BOOL)arg4 ;
-(BOOL)_shouldRemoveViewController:(id)arg1 afterTransitionFromViewController:(id)arg2 toViewController:(id)arg3 canceled:(BOOL)arg4 ;
-(BOOL)_shouldAddViewController:(id)arg1 afterTransitionFromViewController:(id)arg2 toViewController:(id)arg3 ;
-(BOOL)_shouldRemoveViewController:(id)arg1 afterTransitionFromViewController:(id)arg2 toViewController:(id)arg3 ;
-(CGRect)_initialFrameForViewController:(id)arg1 forTransitionFromViewController:(id)arg2 toViewController:(id)arg3 ;
-(CGRect)_finalFrameForViewController:(id)arg1 forTransitionFromViewController:(id)arg2 toViewController:(id)arg3 ;
-(SBTreeNodeViewController *)parentTreeNodeViewController;
-(void)_transitionToExpandedTreeNode:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_forwardToExpandedViewControllerNearestToTreeNode:(id)arg1 withNodeModifier:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
-(void)setExpandedTreeNode:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_performOperation:(long long)arg1 animated:(BOOL)arg2 fromViewController:(id)arg3 fromTreeNode:(id)arg4 toViewController:(id)arg5 toTreeNode:(id)arg6 withContinuation:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_forwardToExpandedViewControllerNearestToTreeNode:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_shouldAddViewControllerAfterCurrentTransitionCompletes:(id)arg1 ;
-(BOOL)_shouldRemoveViewControllerAfterCurrentTransitionCompletes:(id)arg1 ;
-(void)_handleWillRemoveChildViewController:(id)arg1 ;
-(void)addViewToHierarchyForChildTreeNodeViewController:(id)arg1 ;
-(void)_handleAddChildViewController:(id)arg1 ;
-(void)removeViewFromHierarchyForChildTreeNodeViewController:(id)arg1 ;
-(void)transitionWillReverse:(id)arg1 ;
-(void)transitionDidReverse:(id)arg1 ;
-(void)transitionWillFinish:(id)arg1 ;
-(void)setTreeNode:(id<SBTreeNode>)arg1 ;
-(void)setExpandedTreeNodes:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSArray *)expandedTreeNodes;
-(void)setTopExpandedTreeNode:(id)arg1 ;
-(SBTreeNodeViewController *)deepestExpandedDescendantViewController;
-(void)addTransitionObserver:(id)arg1 ;
-(void)removeTransitionObserver:(id)arg1 ;
-(void)addChildTreeNodeViewController:(id)arg1 ;
-(void)setDelegate:(id<SBTreeNodeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBTreeNodeViewControllerDelegate>)delegate;
-(id)indexPath;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isTransitioning;
-(void)transitionDidFinish:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)transitionCoordinator;
-(BOOL)isExpanded;
@end

