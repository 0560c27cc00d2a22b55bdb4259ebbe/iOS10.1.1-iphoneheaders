/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSParsecModel.h>
#import <libobjc.A.dylib/WBSCompletionListItem.h>

@class WBSParsecImageRepresentation, NSURL, SFSearchResult, NSString, NSArray, WBSParsecActionButton, NSNumber, MKMapItem, SFResultSection, NSDictionary;

@interface WBSParsecSearchResult : WBSParsecModel <WBSCompletionListItem> {

	WBSParsecImageRepresentation* _icon;
	WBSParsecImageRepresentation* _completionIcon;
	NSURL* _reportProblemURL;
	BOOL _topHit;
	SFSearchResult* _sfSearchResult;
	NSString* _title;
	NSString* _descriptionText;
	NSString* _identifier;
	NSString* _feedbackIdentifier;
	NSString* _urlString;
	NSString* _sectionHeader;
	NSString* _iTunesItemIdentifier;
	NSString* _completion;
	unsigned long long _type;
	NSString* _typeString;
	unsigned long long _minimumRankOfTopHitToSuppressResult;
	NSString* _appName;
	NSString* _appBundleIdentifier;
	NSURL* _appInstallURL;
	NSURL* _appPunchoutURL;
	NSString* _mediaKind;
	NSString* _referrerForLoadingResult;
	NSArray* _cardSections;
	WBSParsecActionButton* _actionButton;
	NSURL* _cardURL;
	NSNumber* _cardLoadHint;
	MKMapItem* _mapItem;
	NSArray* _additionalMapItems;
	SFSearchResult* _sfSearchResultValue;
	SFResultSection* _sfResultSection;
	NSArray* _supportedStyleOverrides;
	NSDictionary* _styleOverrides;

}

@property (nonatomic,readonly) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * descriptionText;                                          //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * feedbackIdentifier;                                       //@synthesize feedbackIdentifier=_feedbackIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * urlString;                                                //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * sectionHeader;                                            //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,copy,readonly) NSString * iTunesItemIdentifier;                                //@synthesize iTunesItemIdentifier=_iTunesItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * completion;                                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeString;                                          //@synthesize typeString=_typeString - In the implementation block
@property (nonatomic,readonly) NSURL * reportProblemURL; 
@property (nonatomic,readonly) unsigned long long minimumRankOfTopHitToSuppressResult;              //@synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult - In the implementation block
@property (nonatomic,readonly) NSString * appName;                                                  //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) NSString * appBundleIdentifier;                                      //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * appInstallURL;                                               //@synthesize appInstallURL=_appInstallURL - In the implementation block
@property (nonatomic,readonly) NSURL * appPunchoutURL;                                              //@synthesize appPunchoutURL=_appPunchoutURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaKind;                                           //@synthesize mediaKind=_mediaKind - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrerForLoadingResult;                            //@synthesize referrerForLoadingResult=_referrerForLoadingResult - In the implementation block
@property (nonatomic,copy) NSArray * cardSections;                                                  //@synthesize cardSections=_cardSections - In the implementation block
@property (nonatomic,readonly) WBSParsecActionButton * actionButton;                                //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) NSURL * cardURL;                                                     //@synthesize cardURL=_cardURL - In the implementation block
@property (nonatomic,readonly) NSNumber * cardLoadHint;                                             //@synthesize cardLoadHint=_cardLoadHint - In the implementation block
@property (nonatomic,readonly) MKMapItem * mapItem;                                                 //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSArray * additionalMapItems;                                        //@synthesize additionalMapItems=_additionalMapItems - In the implementation block
@property (nonatomic,retain) SFSearchResult * sfSearchResultValue;                                  //@synthesize sfSearchResultValue=_sfSearchResultValue - In the implementation block
@property (nonatomic,retain) SFResultSection * sfResultSection;                                     //@synthesize sfResultSection=_sfResultSection - In the implementation block
@property (nonatomic,readonly) NSArray * supportedStyleOverrides;                                   //@synthesize supportedStyleOverrides=_supportedStyleOverrides - In the implementation block
@property (nonatomic,readonly) NSDictionary * styleOverrides;                                       //@synthesize styleOverrides=_styleOverrides - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * completionIcon;                       //@synthesize completionIcon=_completionIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)resultWithDictionary:(id)arg1 ;
+(id)_specializedSchema;
+(Class)replacementClass;
+(void)setReplacementClass:(Class)arg1 ;
+(id)searchResultSchemaForCardDetailRequest;
+(id)schema;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(unsigned long long)type;
-(NSString *)completion;
-(WBSParsecImageRepresentation *)icon;
-(NSDictionary *)styleOverrides;
-(NSString *)sectionHeader;
-(NSString *)descriptionText;
-(NSString *)appBundleIdentifier;
-(NSString *)appName;
-(NSString *)urlString;
-(NSString *)mediaKind;
-(NSString *)parsecDomainIdentifier;
-(SFSearchResult *)sfSearchResultValue;
-(unsigned long long)engagementDestination;
-(void)setSfSearchResultValue:(SFSearchResult *)arg1 ;
-(void)setSfResultSection:(SFResultSection *)arg1 ;
-(NSURL *)cardURL;
-(void)setCardSections:(NSArray *)arg1 ;
-(NSString *)feedbackIdentifier;
-(NSArray *)additionalMapItems;
-(NSArray *)supportedStyleOverrides;
-(id)iconWithSession:(id)arg1 ;
-(unsigned long long)_constructTypeMaskForTypeString:(id)arg1 ;
-(void)_setStyleOverridesWithDictionary:(id)arg1 ;
-(NSURL *)reportProblemURL;
-(id)completionIconWithSession:(id)arg1 ;
-(BOOL)canBecomeTopHitForQuery:(id)arg1 ;
-(id)_glyphRepresentationsFromGlyphDictionaries:(id)arg1 ;
-(id)_glyphsFromGlyphRepresentations:(id)arg1 withSession:(id)arg2 ;
-(NSString *)iTunesItemIdentifier;
-(unsigned long long)minimumRankOfTopHitToSuppressResult;
-(NSURL *)appInstallURL;
-(NSURL *)appPunchoutURL;
-(NSString *)referrerForLoadingResult;
-(NSArray *)cardSections;
-(NSNumber *)cardLoadHint;
-(SFResultSection *)sfResultSection;
-(WBSParsecImageRepresentation *)completionIcon;
-(MKMapItem *)mapItem;
-(WBSParsecActionButton *)actionButton;
-(NSString *)typeString;
@end

