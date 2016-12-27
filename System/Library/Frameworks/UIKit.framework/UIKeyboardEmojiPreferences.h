/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EMFEmojiPreferencesClient, NSMutableDictionary, NSMutableArray, NSDictionary, NSArray;

@interface UIKeyboardEmojiPreferences : NSObject {

	EMFEmojiPreferencesClient* _preferencesClient;
	NSMutableDictionary* _defaults;
	BOOL _isDefaultDirty;
	int _currentSequence;
	NSMutableDictionary* _usageHistory;
	NSMutableDictionary* _typingNames;
	NSMutableArray* _recents;
	NSMutableDictionary* _skinToneBaseKeyPreferences;
	unsigned long long _maximumRecentsCount;

}

@property (nonatomic,retain) NSDictionary * usageHistoryKey; 
@property (assign,nonatomic) long long currentSequenceKey; 
@property (assign,nonatomic) unsigned long long maximumRecentsCount;                 //@synthesize maximumRecentsCount=_maximumRecentsCount - In the implementation block
@property (nonatomic,retain) NSArray * recents; 
@property (nonatomic,retain) NSDictionary * skinToneBaseKeyPreferences; 
@property (assign,nonatomic) long long selectedCategoryType; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSDictionary *)skinToneBaseKeyPreferences;
-(void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2 ;
-(void)emojiUsed:(id)arg1 language:(id)arg2 ;
-(NSArray *)recents;
-(long long)emojiCategoryDefaultsIndex:(id)arg1 ;
-(id)emptyDefaultsDictionary;
-(void)writeEmojiDefaults;
-(void)_readPreferencesFromDefaults;
-(id)typingNames;
-(NSDictionary *)usageHistoryKey;
-(long long)currentSequenceKey;
-(void)handleWrite:(id)arg1 ;
-(void)handleRead:(id)arg1 ;
-(void)readEmojiDefaults;
-(void)setDefaultsValue:(id)arg1 forKey:(id)arg2 ;
-(id)defaultsValueForKey:(id)arg1 ;
-(double)scoreForSequence:(int)arg1 ;
-(void)setCurrentSequenceKey:(long long)arg1 ;
-(void)setUsageHistoryKey:(NSDictionary *)arg1 ;
-(double)scoreForEmoji:(id)arg1 ;
-(void)setRecents:(NSArray *)arg1 ;
-(void)_emojiUsed:(id)arg1 language:(id)arg2 ;
-(void)_usageForEmoji:(id)arg1 language:(id)arg2 mode:(id)arg3 ;
-(void)setTypingNames:(id)arg1 ;
-(void)setSkinToneBaseKeyPreferences:(NSDictionary *)arg1 ;
-(void)_createPreferencesClientIfNecessary;
-(void)setEmojiCategoryDefaultsIndex:(long long)arg1 forCategory:(id)arg2 ;
-(void)setSelectedCategoryType:(long long)arg1 ;
-(long long)selectedCategoryType;
-(void)emojiUsed:(id)arg1 ;
-(void)emojiPredicted:(id)arg1 typingName:(id)arg2 language:(id)arg3 ;
-(id)typingNameForEmoji:(id)arg1 language:(id)arg2 ;
-(unsigned long long)maximumRecentsCount;
-(void)setMaximumRecentsCount:(unsigned long long)arg1 ;
@end

