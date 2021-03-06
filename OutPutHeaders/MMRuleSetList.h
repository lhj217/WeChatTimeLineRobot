/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MCssParserDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface MMRuleSetList : XXUnknownSuperclass <MCssParserDelegate> {
	NSMutableDictionary* m_ruleSets;
	BOOL m_isAlreadyParsed;
	BOOL m_isParseOK;
	BOOL m_isParseError;
	NSString* m_styleSheetFilePath;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* styleSheetFilePath;
@property(retain, nonatomic) NSMutableDictionary* ruleSets;
-(void).cxx_destruct;
-(void)clearAllRuleSets;
-(BOOL)loadRuleSetsFromPath:(id)path;
-(BOOL)startParse;
-(void)onCssParseEnd;
-(void)onCssParseStart;
-(id)onNextCssFile;
-(void)onParseErrorInFile:(id)file onLineNumber:(id)number withText:(id)text withErrorMessage:(id)errorMessage;
-(void)onReceiveCssRulesetWithSelectors:(id)selectors withDeclarations:(id)declarations;
-(void)onScriptFunctionWithSelectors:(id)selectors withStatements:(id)statements;
-(id)init;
-(void)addOrMergeRuleSet:(id)set forSelector:(id)selector;
-(id)getValueOfProperty:(id)property forSeletor:(id)seletor;
-(id)getRuleSetForSeletor:(id)seletor;
-(void)removeRuleSetForKey:(id)key;
-(void)setRuleSet:(id)set forKey:(id)key;
@end

