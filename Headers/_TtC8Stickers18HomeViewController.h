//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Stickers19BasicViewController.h"

@class NSLayoutConstraint, UIScrollView, UISearchBar, UITableView, UIView;

@interface _TtC8Stickers18HomeViewController : _TtC8Stickers19BasicViewController
{
    // Error parsing type: , name: config
    // Error parsing type: , name: databaseManager
    // Error parsing type: , name: paywallManager
    // Error parsing type: , name: purchaseManager
    // Error parsing type: , name: identifier
    // Error parsing type: , name: shuffledGroups
    // Error parsing type: , name: shouldReloadCollectionViews
    // Error parsing type: , name: headerView
    // Error parsing type: , name: headerViewTopLayoutConstraint
    // Error parsing type: , name: mainScrollView
    // Error parsing type: , name: mainView
    // Error parsing type: , name: middleView
    // Error parsing type: , name: categoriesContainerView
    // Error parsing type: , name: categoriesTableView
    // Error parsing type: , name: categoriesTableViewHeightLayoutConstraint
    // Error parsing type: , name: searchContainerView
    // Error parsing type: , name: searchContainerViewTopLayoutConstraint
    // Error parsing type: , name: searchBar
    // Error parsing type: , name: minimumInteritemSpacing
    // Error parsing type: , name: minimumLineSpacingCategories
    // Error parsing type: , name: categoryAspectRatio
    // Error parsing type: , name: categoriesView
    // Error parsing type: , name: highlightsView
    // Error parsing type: , name: previousScrollOffset
    // Error parsing type: , name: minHeaderTop
    // Error parsing type: , name: minSearchViewTop
    // Error parsing type: , name: maxHeaderTop
    // Error parsing type: , name: lastVisibleCategoryIndex
    // Error parsing type: , name: pushAsModalAnimatedTransitioning
    // Error parsing type: , name: allCategories
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onDotsButtonClicked:(id)arg1;
- (void)onHasSubscription:(id)arg1;
- (void)onUserSubscribed:(id)arg1;
- (void)onAskForAppRateNotificationWithNotification:(id)arg1;
- (void)onRemoteConfigsHaveArrived:(id)arg1;
- (void)onContentWasPutInMemoryWithNotification:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar;
@property(nonatomic) __weak NSLayoutConstraint *searchContainerViewTopLayoutConstraint; // @synthesize searchContainerViewTopLayoutConstraint;
@property(nonatomic) __weak UIView *searchContainerView; // @synthesize searchContainerView;
@property(nonatomic) __weak NSLayoutConstraint *categoriesTableViewHeightLayoutConstraint; // @synthesize categoriesTableViewHeightLayoutConstraint;
@property(nonatomic) __weak UITableView *categoriesTableView; // @synthesize categoriesTableView;
@property(nonatomic) __weak UIView *categoriesContainerView; // @synthesize categoriesContainerView;
@property(nonatomic) __weak UIView *middleView; // @synthesize middleView;
@property(nonatomic) __weak UIView *mainView; // @synthesize mainView;
@property(nonatomic) __weak UIScrollView *mainScrollView; // @synthesize mainScrollView;
@property(nonatomic) __weak NSLayoutConstraint *headerViewTopLayoutConstraint; // @synthesize headerViewTopLayoutConstraint;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView;

@end

