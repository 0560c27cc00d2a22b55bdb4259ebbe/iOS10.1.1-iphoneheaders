/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class ICDrawingAttachmentController, NSMutableArray, NSOperationQueue, NSUndoManager, ICDrawingUndoCheckPoint;

@interface ICDrawingUndoStack : NSObject {

	ICDrawingAttachmentController* _drawingController;
	NSMutableArray* _undoStack;
	NSMutableArray* _redoStack;
	NSMutableArray* _checkPointCommands;
	NSOperationQueue* _operationQueue;
	NSUndoManager* _undoManager;
	ICDrawingUndoCheckPoint* _initialCheckPoint;

}

@property (nonatomic,retain) ICDrawingUndoCheckPoint * initialCheckPoint;                             //@synthesize initialCheckPoint=_initialCheckPoint - In the implementation block
@property (nonatomic,retain) NSMutableArray * undoStack;                                              //@synthesize undoStack=_undoStack - In the implementation block
@property (nonatomic,retain) NSMutableArray * redoStack;                                              //@synthesize redoStack=_redoStack - In the implementation block
@property (nonatomic,retain) NSMutableArray * checkPointCommands;                                     //@synthesize checkPointCommands=_checkPointCommands - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                                             //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,__weak,readonly) ICDrawingAttachmentController * drawingController;              //@synthesize drawingController=_drawingController - In the implementation block
@property (nonatomic,readonly) unsigned long long undoStackDepth; 
-(void)dealloc;
-(void)undo;
-(void)redo;
-(NSUndoManager *)undoManager;
-(void)reset;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)didUndoOrRedo:(id)arg1 ;
-(NSMutableArray *)undoStack;
-(NSMutableArray *)redoStack;
-(NSMutableArray *)checkPointCommands;
-(void)setInitialCheckPoint:(ICDrawingUndoCheckPoint *)arg1 ;
-(void)undoManagerCommand:(id)arg1 ;
-(void)addUndoCommand:(id)arg1 ;
-(void)checkIfNewCheckPointIsNeeded;
-(id)findUndoCheckPointRenderCostOut:(double*)arg1 commandsAfterOut:(id*)arg2 ;
-(ICDrawingAttachmentController *)drawingController;
-(void)didAddCheckPoint;
-(ICDrawingUndoCheckPoint *)initialCheckPoint;
-(void)performUndo;
-(void)performRedo;
-(void)finishUndo:(id)arg1 ;
-(void)applyCommandFromStack:(id)arg1 toStack:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didRemoveCheckPoint;
-(void)finishRedo:(id)arg1 ;
-(id)initWithDrawingController:(id)arg1 ;
-(void)setInitialImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 forCommands:(id)arg3 ;
-(unsigned long long)undoStackDepth;
-(void)didAddNewCommand:(id)arg1 ;
-(void)addEraseUndoCommand:(id)arg1 ;
-(void)setUndoStack:(NSMutableArray *)arg1 ;
-(void)setRedoStack:(NSMutableArray *)arg1 ;
-(void)setCheckPointCommands:(NSMutableArray *)arg1 ;
@end

