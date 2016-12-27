/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUItem, SUItemList, SUStorePageProtocol, SUPageSectionGroup, NSString;

@interface SUStructuredPage : NSObject <NSCopying> {

	BOOL _artworkShouldFitWidth;
	double _artworkWidth;
	BOOL _didShowDialog;
	long long _displayStyle;
	SUItem* _item;
	SUItemList* _itemList;
	SUStorePageProtocol* _protocol;
	SUPageSectionGroup* _sectionsGroup;
	BOOL _shouldHideSignInButton;
	NSString* _title;
	long long _type;
	BOOL _wantsIndexBar;

}

@property (nonatomic,readonly) BOOL hasDisplayableContent; 
@property (nonatomic,retain) SUItem * item;                                   //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) SUItemList * itemList;                           //@synthesize itemList=_itemList - In the implementation block
@property (nonatomic,retain) SUPageSectionGroup * sectionsGroup;              //@synthesize sectionsGroup=_sectionsGroup - In the implementation block
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL artworkShouldFitWidth;                    //@synthesize artworkShouldFitWidth=_artworkShouldFitWidth - In the implementation block
@property (nonatomic,readonly) double artworkWidth;                           //@synthesize artworkWidth=_artworkWidth - In the implementation block
@property (nonatomic,readonly) long long displayStyle;                        //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideSignInButton;                   //@synthesize shouldHideSignInButton=_shouldHideSignInButton - In the implementation block
@property (assign,nonatomic) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL wantsIndexBar;                            //@synthesize wantsIndexBar=_wantsIndexBar - In the implementation block
@property (nonatomic,readonly) BOOL didShowDialog;                            //@synthesize didShowDialog=_didShowDialog - In the implementation block
@property (nonatomic,retain) SUStorePageProtocol * protocol;                  //@synthesize protocol=_protocol - In the implementation block
+(long long)pageTypeForStorePageDictionary:(id)arg1 ;
+(long long)pageTypeForStorePageString:(id)arg1 ;
-(void)setProtocol:(SUStorePageProtocol *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(SUItem *)item;
-(NSString *)title;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItem:(SUItem *)arg1 ;
-(SUStorePageProtocol *)protocol;
-(long long)displayStyle;
-(BOOL)hasDisplayableContent;
-(void)_parseItemsFromDictionary:(id)arg1 ;
-(void)_parseTemplateParametersFromDictionary:(id)arg1 ;
-(void)_parseProtocolFromDictionary:(id)arg1 ;
-(void)setSectionsGroup:(SUPageSectionGroup *)arg1 ;
-(BOOL)didShowDialog;
-(id)_copyItemFromDictionary:(id)arg1 ;
-(long long)_displayStyleForString:(id)arg1 ;
-(BOOL)artworkShouldFitWidth;
-(double)artworkWidth;
-(SUPageSectionGroup *)sectionsGroup;
-(BOOL)shouldHideSignInButton;
-(BOOL)wantsIndexBar;
-(BOOL)loadFromDictionary:(id)arg1 ;
-(void)setItemList:(SUItemList *)arg1 ;
-(SUItemList *)itemList;
@end

