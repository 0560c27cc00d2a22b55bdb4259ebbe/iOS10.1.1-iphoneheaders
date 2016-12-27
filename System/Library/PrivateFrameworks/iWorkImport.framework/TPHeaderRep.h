/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPHeaderRep.h>

@class TPPaginatedPageInfo;

@interface TPHeaderRep : TSWPHeaderRep {

	BOOL _hideKnobs;

}

@property (nonatomic,readonly) TPPaginatedPageInfo * pageInfo; 
@property (assign,nonatomic) BOOL hideKnobs;                                //@synthesize hideKnobs=_hideKnobs - In the implementation block
-(TPPaginatedPageInfo *)pageInfo;
-(BOOL)p_isInDocumentSetup;
-(BOOL)p_isMiddleHeaderRep;
-(BOOL)p_isMiddleFooterRep;
-(BOOL)shouldIgnoreSingleTapAtPoint:(CGPoint)arg1 withRecognizer:(id)arg2 ;
-(BOOL)p_shouldCreateArrowKnobs;
-(BOOL)hideKnobs;
-(void)setHideKnobs:(BOOL)arg1 ;
-(id)pageLayout;
@end

