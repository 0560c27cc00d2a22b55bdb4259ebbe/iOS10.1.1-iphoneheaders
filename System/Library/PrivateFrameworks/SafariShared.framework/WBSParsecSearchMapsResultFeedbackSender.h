/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MKPlaceViewControllerFeedbackDelegate.h>

@protocol WBSCompletionListItemWBSParsecSearchResultPresentedInCard;
@class NSString;

@interface WBSParsecSearchMapsResultFeedbackSender : NSObject <_MKPlaceViewControllerFeedbackDelegate> {

	id<WBSCompletionListItem><WBSParsecSearchResultPresentedInCard> _searchResult;

}

@property (nonatomic,__weak,readonly) id<WBSCompletionListItem><WBSParsecSearchResultPresentedInCard> searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WBSCompletionListItem><WBSParsecSearchResultPresentedInCard>)searchResult;
-(void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2 ;
-(id)initWithSearchResult:(id)arg1 ;
@end

